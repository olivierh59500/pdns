CXXFLAGS+=-D_XOPEN_SOURCE -DHAVE_STRCASESTR -D__APPLE_USE_RFC_3542 -Wno-deprecated-declarations

LUA_CPPFLAGS_CONFIG ?= -I/usr/include/lua5.1
LUA_LIBS_CONFIG ?= -llua5.1 -rdynamic

# Lua 5.0 settings
#LUA_CPPFLAGS_CONFIG=-I/usr/include/lua50 
#LUA_LIBS_CONFIG=-llua50 -llualib50
