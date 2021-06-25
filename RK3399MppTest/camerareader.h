#ifndef CAMERAREADER_H
#define CAMERAREADER_H

#include <stdint.h>

class CameraReader
{

public:
    CameraReader();

    void start();

private:
    bool process_image(uint8_t *p, int size);
    int read_frame(int fd);
    void main_loop(int fd);
    void stop_capturing(int fd);
    int start_capturing(int fd);
    void uninit_device(void);
    int init_read(unsigned int buffer_size);
    int init_mmap(int fd);
    int init_device(int fd);
    void init_mpp();
    void close_device(int fd);
    void destroy_mpp();
    int open_device(void);

private:
    int camera_fd;
};

#endif // CAMERAREADER_H
