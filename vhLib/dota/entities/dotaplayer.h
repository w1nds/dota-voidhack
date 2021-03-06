
#pragma once


#include "dotaentity.h"

#include "entprop.h"


class C_BasePlayer;


class C_DOTAPlayer : public C_DOTABaseEntity
{
	DECLARE_CLASS( C_DOTAPlayer, C_DOTABaseEntity );

public:
	C_DOTAPlayer( C_BasePlayer *pEnt );

	operator C_BasePlayer *()
	{
		return reinterpret_cast<C_BasePlayer *>( GetEntity() );
	}


	// is this player instance the local player?
	bool IsLocalPlayer();


public:
	CEntProp( int, m_iPlayerID );

	CEntProp( C_BaseEntity *, m_hAssignedHero );


public:
	static C_DOTAPlayer GetLocalPlayer();

	static C_DOTAPlayer GetPlayerByIndex( int index );
	static C_DOTAPlayer GetPlayerByPlayerID( int playerId );

};

