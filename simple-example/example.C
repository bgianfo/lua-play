#include "lua-play.h"

int main ( int argc, char *argv[] )
{
    usage(argc);

    /* initialize Lua */
    lua_State* lua = luaL_newstate();
    luaL_openlibs( lua );

    //
    // Read in the lua script specified on the cl & run.
    // 
    int s = luaL_dofile( lua, argv[1] );

    report_errors( lua, s );
    // Clean up
    lua_close( lua );
    return 0;
}
