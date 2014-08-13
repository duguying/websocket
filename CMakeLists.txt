project(websocket)

set(SRC_DIR ./src)

set(SRV_LIST
    ${SRC_DIR}/websocket.c
    ${SRC_DIR}/sock.c
    ${SRC_DIR}/thread.c
    )

add_executable(wssrv ${SRV_LIST})
target_link_libraries(wssrv pthread)

