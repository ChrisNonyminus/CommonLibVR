#include "RE/M/MagicItem.h"
#include "RE/E/Effect.h"

namespace RE
{
	float MagicItem::CalculateMagickaCost(Actor* a_caster) const
	{
		return CalculateCost(a_caster);
	}

	float MagicItem::CalculateTotalGoldValue(Actor* a_caster) const
	{
		return CalculateCost(a_caster);
	}

	Effect* MagicItem::GetCostliestEffectItem(std::uint32_t a_arg1, bool a_arg2)
	{
		using func_t = decltype(&MagicItem::GetCostliestEffectItem);
		REL::Relocation<func_t> func{ Offset::MagicItem::GetCostliestEffectItem };
		return func(this, a_arg1, a_arg2);
	}

	float MagicItem::CalculateCost(Actor* a_caster) const
	{
		using func_t = decltype(&MagicItem::CalculateTotalGoldValue);
		REL::Relocation<func_t> func{ Offset::MagicItem::CalculateCost };
		return func(this, a_caster);
	}

	auto MagicItem::GetData()
		-> Data*
	{
		return GetData2();
	}

	auto MagicItem::GetData() const
		-> const Data*
	{
		return GetData1();
	}

	bool MagicItem::IsValid() const
	{
		using func_t = decltype(&MagicItem::IsValid);
		REL::Relocation<func_t> func{ RELOCATION_ID(11183, 11290) };
		return func(this);
	}
	Effect* MagicItem::GetEffectIsMatch(EffectSetting* a_base, float a_mag, ::uint32_t a_area, ::uint32_t a_dur, float a_cost)
	{
		auto it = std::find_if(effects.begin(), effects.end(),
			[&](const auto& effect) { return effect && effect->IsMatch(a_base, a_mag, a_area, a_dur, a_cost); });
		return it != effects.end() ? *it : nullptr;
	}
}
