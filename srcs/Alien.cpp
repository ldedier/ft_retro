/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Alien.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldedier <ldedier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 20:53:25 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/20 10:01:12 by ldedier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Alien.hpp"
#include "LaserThrower.hpp"

Alien::Alien(void): AbstractEnemy()
{
	
}

Alien::Alien(Vec2 pos, Vec2 dir, Blueprint *blueprint):
    AbstractEnemy(pos, dir, blueprint, 50, 100, WeaponSlot(Vec2(0,0), Vec2(0,1), new LaserThrower()))
{
    std::cerr << "New alien spawned" << std::endl;
}

Alien::Alien(Alien const &instance)
{
	*this = instance;
}

Alien::~Alien(void)
{
	
}

/*Alien::Alien(** replace parameters **)
{
	
}*/

Alien &	Alien::operator=(Alien const &rhs)
{
	(void)rhs;
    return *this;
}

/*void    Alien::update(Map &map)
{
    (void)map;
}*/

/*bool    Alien::shouldBeCleaned()
{
    return false;
}*/

// void    Alien::onCollide(Player &player)
// {
//     (void)player;
// }
// void    Alien::onCollide(AbstractEnemy &enemy)
// {
//     (void)enemy;
// }