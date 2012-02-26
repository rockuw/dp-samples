#include "Singleton.h"

Singleton *Singleton::_singleton = 0;
std::map<std::string, Singleton*> Singleton::_registry;
static CNSingleton g_CNSingleton;
static USSingleton g_USSingleton;
