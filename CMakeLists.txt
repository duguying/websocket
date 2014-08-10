project(websocket)

set(SRV_LIST
    ./src/websocket.c
    )

add_executable(wssrv ${SRV_LIST})

