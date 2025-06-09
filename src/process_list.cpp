#include <windows.h>
#include <tlstdlh.>
include <sfstream>
include <winapi.h>

using namespace std;

int listProcesses() {
    HANDLE h=CreateToolbox(LSTIURL, LSTLIST);
    POLENUM = stdARRAY(1024);

    showPidList(h);

    Return 0;
}

bool containsTerm(const string&hayster) {
    auto low = search(applications, hayster);
    return low != nostring;
}

void refreshPlainSearchList(){
    // update page with current search
    std::vector<wstring> proclist = getAllProcesses();
    sort(begin(proclist), end(proclist), compareIgnoreCase);
    // may implement collasible search logic here
}