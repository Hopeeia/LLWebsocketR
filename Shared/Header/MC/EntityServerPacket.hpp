// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EntityServerPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSERVERPACKET
public:
    class EntityServerPacket& operator=(class EntityServerPacket const&) = delete;
    EntityServerPacket(class EntityServerPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~EntityServerPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const = 0;
    /*2*/ virtual std::string getName() const = 0;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~EntityServerPacket(){
         (EntityServerPacket::*rv)();
        *((void**)&rv) = dlsym("??1EntityServerPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    inline enum StreamReadResult _read(class ReadOnlyBinaryStream& a0){
        enum StreamReadResult (EntityServerPacket::*rv)(class ReadOnlyBinaryStream&);
        *((void**)&rv) = dlsym("?_read@EntityServerPacket@@MEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z");
        return (this->*rv)(std::forward<class ReadOnlyBinaryStream&>(a0));
    }
    */
    MCAPI EntityServerPacket(class EntityContext const&);
    MCAPI EntityServerPacket();

protected:

private:

};