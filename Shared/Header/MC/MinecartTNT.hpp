// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Minecart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MinecartTNT : public Minecart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTTNT
public:
    class MinecartTNT& operator=(class MinecartTNT const&) = delete;
    MinecartTNT(class MinecartTNT const&) = delete;
    MinecartTNT() = delete;
#endif

public:
    /*0*/ virtual ~MinecartTNT();
    /*1*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual float getInterpolatedHeadRot(float) const;
    /*4*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void normalTick();
    /*7*/ virtual float getRidingHeight();
    /*8*/ virtual void __unk_vfn_2();
    /*9*/ virtual void __unk_vfn_3();
    /*10*/ virtual float getCameraOffset() const;
    /*11*/ virtual float getShadowHeightOffs();
    /*12*/ virtual float getShadowRadius() const;
    /*13*/ virtual void __unk_vfn_4();
    /*14*/ virtual void __unk_vfn_5();
    /*15*/ virtual void playerTouch(class Player&);
    /*16*/ virtual bool isPickable();
    /*17*/ virtual void __unk_vfn_6();
    /*18*/ virtual bool isSleeping() const;
    /*19*/ virtual void setSleeping(bool);
    /*20*/ virtual void __unk_vfn_7();
    /*21*/ virtual bool isBlocking() const;
    /*22*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*23*/ virtual void __unk_vfn_8();
    /*24*/ virtual bool isSurfaceMob() const;
    /*25*/ virtual void __unk_vfn_9();
    /*26*/ virtual void __unk_vfn_10();
    /*27*/ virtual void __unk_vfn_11();
    /*28*/ virtual class Actor* findAttackTarget();
    /*29*/ virtual bool isValidTarget(class Actor*) const;
    /*30*/ virtual void adjustDamageAmount(int&) const;
    /*31*/ virtual void onTame();
    /*32*/ virtual void onFailedTame();
    /*33*/ virtual bool isJumping() const;
    /*34*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*35*/ virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /*36*/ virtual void animateHurt();
    /*37*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*38*/ virtual float getPickRadius();
    /*39*/ virtual void awardKillScore(class Actor&, int);
    /*40*/ virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /*41*/ virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /*42*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*43*/ virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const&);
    /*44*/ virtual class HashedString const& queryEntityRenderer() const;
    /*45*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*46*/ virtual bool canFreeze() const;
    /*47*/ virtual int getPortalWaitTime() const;
    /*48*/ virtual bool canChangeDimensions() const;
    /*49*/ virtual void __unk_vfn_12();
    /*50*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*51*/ virtual void causeFallDamage(float, float, class ActorDamageSource);
    /*52*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*53*/ virtual bool canBePulledIntoVehicle() const;
    /*54*/ virtual bool inCaravan() const;
    /*55*/ virtual void __unk_vfn_13();
    /*56*/ virtual bool canSynchronizeNewEntity() const;
    /*57*/ virtual void buildDebugInfo(std::string&) const;
    /*58*/ virtual int getDeathTime() const;
    /*59*/ virtual void swing();
    /*60*/ virtual void __unk_vfn_14();
    /*61*/ virtual void __unk_vfn_15();
    /*62*/ virtual float getYHeadRot() const;
    /*63*/ virtual bool isWorldBuilder() const;
    /*64*/ virtual void __unk_vfn_16();
    /*65*/ virtual bool isAdventure() const;
    /*66*/ virtual bool canDestroyBlock(class Block const&) const;
    /*67*/ virtual void setAuxValue(int);
    /*68*/ virtual void stopSpinAttack();
    /*69*/ virtual void __unk_vfn_17();
    /*70*/ virtual void __unk_vfn_18();
    /*71*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*72*/ virtual void __unk_vfn_19();
    /*73*/ virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    /*74*/ virtual void __unk_vfn_20();
    /*75*/ virtual void __unk_vfn_21();
    /*76*/ virtual void destroy(class ActorDamageSource const&, bool);
    /*77*/ virtual enum MinecartType getType();
    /*78*/ virtual class Block const* getDefaultDisplayBlock() const;
    /*79*/ virtual void __unk_vfn_22();
    /*80*/ virtual int getDefaultDisplayOffset() const;
    MCAPI MinecartTNT(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class OwnerPtrT<struct EntityRefTraits> const&);
    MCAPI void primeFuse(enum ActorDamageCause);

protected:

private:
    MCAPI static int const DEFAULT_FUSE_LENGTH;

};