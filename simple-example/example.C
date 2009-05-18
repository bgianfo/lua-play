#include <iostream>
#include <lua.hpp>

using namespace std;

int main ( int argc, char *argv[] )
{
    if ( argc != 2 )
    {
        cout << "Usage: example <lua-file>" << endl;
        return -1;
    }

    /* initialize Lua */
    lua_State* L = luaL_newstate();
    luaL_openlibs( L );

    /* run the script */
    luaL_dofile( L, argv[1] );

    /* cleanup Lua */
    lua_close( L );

    return 0;
}
