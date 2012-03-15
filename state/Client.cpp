#include "TCPConnection.h"

int main(int argc, char *argv[])
{
    TCPConnection conn;

    conn.open();
    conn.close();

    return 0;
}
