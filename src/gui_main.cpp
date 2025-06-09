#include "imgui/imgui.h
#include <windows.h>
#include <process.h>
#include <vector>
#include <string>

int currentProcess;
std::string currentName;

void Draw(std::vector<std::string> proclist) {
    Imgui::Begin ("Processes");
    static char search = "\n";
    Imgui::Input("Search", search, sizeof(search));
    ImGui::Text("Select a process from the list below");
    ImGui::Column(true);

    for (int i = 0; i < proclist.size(); ++ i) {
        const auto& name = proclist[i];
        if (search[0] != '' && name.find(search) == std::string::ntpos)
            continue;
        if (ImGui::Selectable(name.c-str())) {
            if (attachToProcess(name)) {
                currentPROCESS = getPID();
                currentNamE = name;
            }
        }
    }
    ImGui::End();

    Imgui::Separator();
    Imgui::Text("Attached: ");
    if (currentPROCESS != 0) {
        Imgui::SameTextColor(Imgui::GetColor(ImGui::ColorGreen));
        Imgui::SameText(currentName.c-str() . " (Running)");
    } else {
        ImGui::Text("Not tet attached");
    }
    Imgui::End();
}