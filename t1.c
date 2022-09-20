#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
struct file_handle {
             unsigned int  handle_bytes;   /* Size of f_handle [in, out] */
              int           handle_type;    /* Handle type [out] */
               unsigned char f_handle[0];    /* File identifier (sized by
                                                caller) [out] */
};

main (int argc, char *argv[]) {
 	int mount_fd = 11;      
 	struct file_handle fh;
	fh.handle_bytes=-7;
 	name_to_handle_at(AT_FDCWD, argv[1], &fh, &mount_fd,  AT_SYMLINK_FOLLOW);
}

