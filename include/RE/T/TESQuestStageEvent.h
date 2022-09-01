#pragma once

namespace RE
{
	struct TESQuestStageEvent
	{
	public:
		// members
		std::uintptr_t unk00;		// 00 (Contains Quest's formID and current stage)
		FormID	formID;				// 04
		std::uint16_t  targetStage; // 08
	};
	static_assert(sizeof(TESQuestStageEvent) == 0x10);
}
