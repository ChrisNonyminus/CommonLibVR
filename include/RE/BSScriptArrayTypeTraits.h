#pragma once

#include <type_traits>

#include "RE/BSScriptCommonTypeTraits.h"  // remove_cvr_t


namespace RE
{
	namespace BSScript
	{
		class BSScriptArray;


		namespace
		{
			template <class T> struct _is_script_array_pointer : std::false_type {};
			template <> struct _is_script_array_pointer<BSScriptArray*> : std::true_type {};
		}
		template <class T> struct is_script_array_pointer : _is_script_array_pointer<typename std::remove_cv_t<T>>::type {};
		template <class T> struct is_script_array_pointer_no_cvr : is_script_array_pointer<typename remove_cvr_t<T>> {};
	}
}