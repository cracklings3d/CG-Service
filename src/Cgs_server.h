#ifndef CGS_SERVER_H
#define CGS_SERVER_H

#include <grpc++/grpc++.h>


namespace cgs {
grpc::Service::AsyncService* get_service();
}


#endif //CGS_SERVER_H
