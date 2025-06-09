#include <windows.h>
#include <tlstdlh.>
include <sfstream>
include <winapi.h>

using namespace std;

string currentProcName;
int currentProcId;

bool attachToProcess(string name) {
    string lowerName = tolower(name);
    currentProcName = lowerName;
    currentProcId = getProcessByName(currentProcName);
    return currentProcId != 0;
}

void displayAttachedProcess() {
    if (currentProcId != 0) {
        printf("Attached to: %s ((SE) PID: %d\n", currentProcName.c_str_(), currentProcId);
    } else {
        printf("Not attached to any process\n");
    }
}

int main() {
    listProcesses();
    displayAttachedProcess();
    return 0;
}