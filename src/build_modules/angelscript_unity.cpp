
#include "config.h"

#define AS_NO_EXCEPTIONS 1
#define AS_NO_THREADS 1 // Useful optimization as zc does dot support multithreading.


#include "angelscript/angelscript/as_atomic.cpp"
#include "angelscript/angelscript/as_builder.cpp"
#include "angelscript/angelscript/as_bytecode.cpp"
#include "angelscript/angelscript/as_callfunc.cpp"
#include "angelscript/angelscript/as_callfunc_arm.cpp"
#include "angelscript/angelscript/as_callfunc_mips.cpp"
#include "angelscript/angelscript/as_callfunc_ppc.cpp"
#include "angelscript/angelscript/as_callfunc_ppc_64.cpp"
#include "angelscript/angelscript/as_callfunc_sh4.cpp"
#include "angelscript/angelscript/as_callfunc_x64_gcc.cpp"
#include "angelscript/angelscript/as_callfunc_x64_mingw.cpp"
#include "angelscript/angelscript/as_callfunc_x64_msvc.cpp"
#include "angelscript/angelscript/as_callfunc_x86.cpp"
#include "angelscript/angelscript/as_callfunc_xenon.cpp"
#include "angelscript/angelscript/as_compiler.cpp"
#include "angelscript/angelscript/as_configgroup.cpp"
#include "angelscript/angelscript/as_context.cpp"
#include "angelscript/angelscript/as_datatype.cpp"
#include "angelscript/angelscript/as_gc.cpp"
#include "angelscript/angelscript/as_generic.cpp"
#include "angelscript/angelscript/as_globalproperty.cpp"
#include "angelscript/angelscript/as_memory.cpp"
#include "angelscript/angelscript/as_module.cpp"
#include "angelscript/angelscript/as_objecttype.cpp"
#include "angelscript/angelscript/as_outputbuffer.cpp"
#include "angelscript/angelscript/as_parser.cpp"
#include "angelscript/angelscript/as_restore.cpp"
#include "angelscript/angelscript/as_scriptcode.cpp"
#include "angelscript/angelscript/as_scriptengine.cpp"
#include "angelscript/angelscript/as_scriptfunction.cpp"
#include "angelscript/angelscript/as_scriptnode.cpp"
#include "angelscript/angelscript/as_scriptobject.cpp"
#include "angelscript/angelscript/as_string.cpp"
#include "angelscript/angelscript/as_string_util.cpp"
#include "angelscript/angelscript/as_thread.cpp"
#include "angelscript/angelscript/as_tokenizer.cpp"
#include "angelscript/angelscript/as_typeinfo.cpp"
#include "angelscript/angelscript/as_variablescope.cpp"
