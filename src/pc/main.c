#include <stdio.h>
#include <rxi/log.h>

#include "stubs.h"
#include "afs.h"

int main() {
    /*
    struct dirent *de;
    DIR* dr = opendir("game_files");

    if (dr == NULL) {
        log_error("Couldn't open directory\n");
        return 0;
    }

    while ((de = readdir(dr)) != NULL)
        log_debug("%s\n", de->d_name);

    closedir(dr);
    */

    read_afs("game_files/ADV.afs");


    printf("Hello World\n");
    log_info("RECVX PORT");

    // INIT
    log_debug("njUserInit");
    njUserInit();

    // MAIN
    log_debug("njUserMain");
    njUserMain();

    /*
    log_debug("njUserMain");
    njUserMain();

    log_debug("njUserMain");
    njUserMain();
    */

    // EXIT
    log_debug("njUserExit");
    njUserExit();
}
