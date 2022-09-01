#pragma once

namespace RE
{
	struct TESQuestInitEvent
	{
	public:
		// members
		FormID	formID;	// 00
	};
	static_assert(sizeof(TESQuestInitEvent) == 0x4);
}
