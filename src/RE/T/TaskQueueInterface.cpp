#include "RE/T/TaskQueueInterface.h"

namespace RE
{
	TaskQueueInterface* TaskQueueInterface::GetSingleton()
	{
#ifndef SKYRIMVR
		REL::Relocation<TaskQueueInterface**> singleton{ REL::ID(517228) };
#else
		REL::Relocation<TaskQueueInterface**> singleton{ 0x2ffd778 };
#endif
		return *singleton;
	}

	bool TaskQueueInterface::ShouldUseTaskQueue()
	{
		using func_t = decltype(&TaskQueueInterface::ShouldUseTaskQueue);
		REL::Relocation<func_t> func{ RELOCATION_ID(38079, 39033) };
		return func();
	}

	void TaskQueueInterface::QueueAddRipple(float a_scale, const NiPoint3& a_pos)
	{
		using func_t = decltype(&TaskQueueInterface::QueueAddRipple);
		REL::Relocation<func_t> func{ RELOCATION_ID(35978, 36953) };
		return func(this, a_scale, a_pos);
	}

	void TaskQueueInterface::QueueForceWeather(TESWeather* a_weather, bool a_forceOverride)
	{
		using func_t = decltype(&TaskQueueInterface::QueueForceWeather);
		REL::Relocation<func_t> func{ RELOCATION_ID(35991, 36966) };
		return func(this, a_weather, a_forceOverride);
	}

	void TaskQueueInterface::QueueRemoveSpell(ActorHandle& a_actorHandle, SpellItem* a_spellItem)
	{
		using func_t = decltype(&TaskQueueInterface::QueueRemoveSpell);
		REL::Relocation<func_t> func{ RELOCATION_ID(35987, 36962) };
		return func(this, a_actorHandle, a_spellItem);
	}
}
