#pragma once

namespace RE
{
    class TESObjectREFR;

    struct TESPackageEvent
	{
		enum class PackageEventType
		{
			kBegin = 0,
			kEnd = 1,
			kUpdate = 2
		};
		// members
		RE::TESObjectREFR* owner;			// 00
		RE::FormID packageFormId;			// 08
		PackageEventType packageEventType;	// 0C
	};
	static_assert(sizeof(TESPackageEvent) == 0x10);
}
    