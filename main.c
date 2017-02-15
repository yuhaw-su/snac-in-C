#include <stdio.h>
#include <sodium.h>
#include </usr/include/opus/opus.h>
//opus installation http://www.linuxfromscratch.org/blfs/view/svn/multimedia/opus.html

//to link it -lsodium
//sudo apt-get install libsodium18 libsodium-dev pkg-config
//libsodium set up correctly [X]
//opus set up but couldnt locate link [X]
//
/*


    Install the opus-tools package:

    sudo apt-get install opus-tools

    and then create opus files from the commandline:

    opusenc --bitrate 128 input.wav output.opus  

    Install the libav-tools package:

    sudo apt-get install libav-tools

    and then create your opus files from the commandline:

    avconv -i input.wav -c:a libopus -b:a 128k output.opus


*/
int main(int argc, char **argv)
{
	if (sodium_init() == -1) 
	{
        return 1;
    }

	printf("hello world\n");
	return 0;
}

