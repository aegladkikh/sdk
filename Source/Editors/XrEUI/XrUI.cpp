#include "stdafx.h"

XrUI::~XrUI()
{
}

void XrUI::ResetBegin()
{

}

void XrUI::ResetEnd()
{

}

void XrUI::SetTooltipThis(const char* text)
{
	if (ImGui::IsItemHovered()) {
		ImGui::SetTooltip(text);
	}
}
