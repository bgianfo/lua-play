#include <iostream>
#include <lua.hpp>

static void report_errors( lua_State *lua, const int status )
{
    if ( 0 != status )
    {
        std::cerr << "-- " << lua_tostring( lua, -1 ) << std::endl;
        lua_pop( lua, 1 );
    }
}

static void usage( const int argc )
{
    if ( 2 != argc )
    {
        std::cerr << "Usage: example <lua-file>" << std::endl;
        exit(-1);
    }
}

