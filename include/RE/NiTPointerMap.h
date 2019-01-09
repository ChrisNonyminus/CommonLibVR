#pragma once

#include "RE/NiTMapBase.h"  // NiTMapBase
#include "RE/NiTPointerAllocator.h"  // NiTPointerAllocator


namespace RE
{
	template <class TKEY, class TVAL>
	class NiTPointerMap : public NiTMapBase<NiTPointerAllocator<std::uint32_t>, TKEY, TVAL>
	{
	public:
		typedef typename NiTMapBase::item_type item_type;


		NiTPointerMap(std::uint32_t a_hashSize = 37) :
			NiTMapBase(a_hashSize)
		{}


		~NiTPointerMap()
		{
			RemoveAll();
		}

	protected:
		// override (NiTMapBase)
		virtual item_type* NewItem() override
		{
			return (item_type*)_allocator.Allocate();
		}


		virtual void DeleteItem(item_type* a_item) override
		{
			a_item->~item_type();
			_allocator.Deallocate(a_item);
		}
	};
	using TestNiTPointerMap = NiTPointerMap<uint32_t, uint64_t>;
	STATIC_ASSERT(sizeof(TestNiTPointerMap) == 0x20);
}