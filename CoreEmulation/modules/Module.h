#pragma once

#include <string>

namespace Pure3X
{

class Module
{
public:
    Module(const std::string& name);
    virtual ~Module() = default;

    virtual bool Initialize();
    virtual void Shutdown();

    const std::string& GetName() const;

protected:
    std::string m_name;
};

} // namespace Pure3X
