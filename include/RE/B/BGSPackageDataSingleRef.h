#pragma once

#include "BGSPackageDataPointerTemplate.h"
#include "RE/T/TESPackage.h"

namespace RE
{
    class BGSPackageDataSingleRef : public BGSPackageDataPointerTemplate<IPackageData, PackageTarget>
    {
    public:
	    inline static constexpr auto RTTI = RE::RTTI_BGSPackageDataRef;

	    ~BGSPackageDataSingleRef() override;  // 00

	    void Unk_06(void) override;									// 06
	    void Unk_07(void) override;									// 07
	    void LoadBuffer(RE::BGSLoadFormBuffer* a_buf) override;		// 08
	    void Unk_09(void) override;									// 09
	    bool GetDataAsString(RE::BSString* a_dst) const override;	// 0A
	    void Unk_0C(void) override;									// 0C
    };
    static_assert(sizeof(BGSPackageDataSingleRef) == 0x18);
}
