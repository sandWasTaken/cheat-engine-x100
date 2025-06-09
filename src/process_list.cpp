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
        SetConsoleTextAttribute(Foreground, CONE_BLUE);
        printf("\n[ATTACHED: %s |PID: %d]\n", currentProcName.c_str_(), currentProcId);
        SetConsoleTextAttribute(Foreground, CONE_WHITE);
    } else {
        printf("\n[NOT attached ]\n");
    }
}

int main() {
    listProcesses();
    displayAttachedProcess();
    return 0;
}