#ifndef TVCOMPANY
#define TVCOMPANY
#include "Employee.h"
#include "Channel.h"
#include "Complaints.h"
#include "General.h"
#define ADULT_VIEWER 40
#define DIVIDING(x) ((x) / (2))

typedef enum {
	eNotSorted, eViewerName, eStartDate, eEndDate, eNofSortTypes
} eSortType;

static const char* sortTypeStr[eNofSortTypes]
= { "Viewer name", "Start date", "End date" };



typedef struct
{
	char* companyName;

	Employee** employeeArr;
	int numOfEmployees;

	Viewer** viewerArr;
	int numOfViewers;

	Channel* channelArr;
	int numOfChannels;
	
	Complaints* complaintsArr;
	int numOfCompliants;

	eSortType sortType;
}TvCompany;

void initTvCompany(TvCompany* pCompany);
int addChannelsToViewerByContractType(TvCompany* pCompany, Viewer* pViewer);
int addEmployee(TvCompany* pCompany);
int addViewer(TvCompany* pCompany);
int addChannel(TvCompany* pCompany);
Channel* channelNumberExist(int channelNum, Channel* channelArr, int numOfChannels);
Viewer* viewerNumberExist(int numOfAccount, const Viewer** viewerArr, int numOfViewers);
int addComplaint(TvCompany* pCompany);
int isComplaintAccepted(const TvCompany* pCompany, const Complaints* cpmplaintArr, const Channel* userChannel);
int RespondingToCustomerComplaints(TvCompany* pCompany, Complaints* pComp, Channel* userChannel);
void sortViewer(TvCompany* pCompany);
void findViewer(const TvCompany* pCompany);
int compareContractByContractNum(const void* viewer1, const void* viewer2);
int compareContractByStartDate(const void* viewer1, const void* viewer2);
int compareContractByEndDate(const void* viewer1, const void* viewer2);
void printAllAdultViewers(const TvCompany* pCompany);
void printAllCommercialsSameType(const TvCompany* pCompany);
void printTvCompany(const TvCompany* pCompany);

void writeCompanyToFile(const TvCompany* company, const char* filename);
void printViewerToFile(const Viewer* pViewer, FILE* file);
void printEmployeeToFile(const Employee* pEmployee, FILE* file);
void printChannelToFile(const Channel* pChannel, FILE* file);
void printComplaintToFile(const Complaints* pComplaint, FILE* file);

TvCompany readCompanyFromFile(const char* filename);
Viewer* readViewerFromFile(FILE* file);
Employee* readEmployeeFromFile(FILE* file);
Channel readChannelFromFile(FILE* file);
Complaints readComplaintFromFile(FILE* file);
Show* readShowFromFile(FILE* file);
Commercial readCommercialFromFile(FILE* file);
Time readTimeFromFile(FILE* file);

void writeCompanyToBinaryFile(const TvCompany* company, const char* filename);
void writeViewerToBinaryFile(const Viewer* pViewer, FILE* file);
void writeEmployeeToBinaryFile(const Employee* pEmployee, FILE* file);
void writeChannelToBinaryFile(const Channel* channel, FILE* file);

TvCompany readCompanyFromBinaryFile(const char* filename);
Viewer* readViewerFromBinaryFile(FILE* file);
Employee* readEmployeeFromBinaryFile(FILE* file);
Channel readChannelFromBinaryFile(FILE* file);
Show* readShowFromBinaryFile(FILE* file);

void freeCompany(TvCompany* company);

#endif 
