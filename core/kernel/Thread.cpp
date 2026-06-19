#include "Thread.h"
#include "../logger/Log.h"

namespace Pure3X {

Thread::Thread() {}

bool Thread::Start()
{
    Log::Info("Thread iniciada");
    return true;
}

}
