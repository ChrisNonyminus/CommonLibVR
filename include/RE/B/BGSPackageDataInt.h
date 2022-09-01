#pragma once

#include "BGSPackageDataPointerTemplate.h"

namespace RE
{
    struct PackageInt : public IPackageData
    {
	    std::uint64_t unk00;	// 00
    };
    static_assert(sizeof(PackageInt) == 0x10);

    class BGSPackageDataInt : public BGSPackageDataPointerTemplate<IPackageData, PackageInt>
    {
    public:
	    inline static constexpr auto RTTI = RE::RTTI_BGSPackageDataInt;

	    ~BGSPackageDataInt() override;  // 00

	    void Unk_06(void) override;									// 06
	    void Unk_07(void) override;									// 07
	    void LoadBuffer(RE::BGSLoadFormBuffer* a_buf) override;		// 08
	    void Unk_09(void) override;									// 09
	    bool GetDataAsString(RE::BSString* a_dst) const override;	// 0A
	    void Unk_0C(void) override;									// 0C
    };
    static_assert(sizeof(BGSPackageDataInt) == 0x18);
}
