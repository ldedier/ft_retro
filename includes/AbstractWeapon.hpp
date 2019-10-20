/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbstractWeapon.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:46:02 by ldedier           #+#    #+#             */
/*   Updated: 2019/10/20 09:36:47 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTWEAPON_HPP
# define ABSTRACTWEAPON_HPP

# include <iostream>
# include "AbstractProjectile.hpp"
# include "WeaponSlot.hpp"
# include "EntityContainer.hpp"

class Map;
class Player;
class AbstractEnemy;
class WeaponSlot;

class AbstractWeapon
{
	public:
		AbstractWeapon(void);
		AbstractWeapon(double fireRate, std::string projectileName);
		AbstractWeapon(AbstractWeapon const &instance);
		AbstractWeapon &operator=(AbstractWeapon const &rhs);
		virtual ~AbstractWeapon(void);
		virtual void processBeShot(AbstractEntity &entity, WeaponSlot ws, EntityContainer &container, Map &map) = 0;

		virtual void beShot(AbstractEnemy &enemy, WeaponSlot ws, Map &map);
		virtual void beShot(Player &player, WeaponSlot ws, Map &map);
	private:
		double		_fireRate;
		double		_fireTimer;
		std::string _projectileName;
};

std::ostream &operator<<(std::ostream &o, AbstractWeapon const &instance);
#endif