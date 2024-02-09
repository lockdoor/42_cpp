/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:18:47 by pnamnil           #+#    #+#             */
/*   Updated: 2024/02/09 15:47:33 by pnamnil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	__initIdeas();
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &rhs)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs.getIdeas(i);
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain & Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain assign constructor called" << std::endl;
	if (this == &rhs) return (*this);
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs.getIdeas(i);
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdeas(int index) const
{
	if (index > -1 && index < 100)
		return (_ideas[index]);
	else
		return ("");
}

void Brain::setIdea(std::string const &idea, int index)
{
	if (index > -1 && index < 100)
		_ideas[index] = idea;
}

void Brain::__initIdeas()
{
	_ideas[0] = "I love to run and play in the fields.";
	_ideas[1] = "My fur is soft and fluffy.";
	_ideas[2] = "I enjoy exploring new environments.";
	_ideas[3] = "My favorite pastime is napping in the sun.";
	_ideas[4] = "I communicate with others through various sounds.";
	_ideas[5] = "I have sharp claws for climbing trees.";
	_ideas[6] = "My sense of smell helps me find food.";
	_ideas[7] = "I enjoy swimming in cool streams.";
	_ideas[8] = "I am always alert to potential dangers.";
	_ideas[9] = "My favorite food is fresh fish.";
	_ideas[10] = "I have a keen sense of hearing.";
	_ideas[11] = "I am an excellent hunter.";
	_ideas[12] = "My fur changes color to blend with my surroundings.";
	_ideas[13] = "I like to socialize with other animals.";
	_ideas[14] = "I am an expert at finding hidden water sources.";
	_ideas[15] = "I can jump high to evade predators.";
	_ideas[16] = "My long tail helps me maintain balance.";
	_ideas[17] = "I am fast and agile.";
	_ideas[18] = "I mark my territory with scent markings.";
	_ideas[19] = "I have sharp teeth for tearing meat.";
	_ideas[20] = "I am known for my endurance in long-distance running.";
	_ideas[21] = "My keen eyesight helps me spot prey from afar.";
	_ideas[22] = "I rely on camouflage to blend in with my surroundings.";
	_ideas[23] = "I am capable of flying long distances without rest.";
	_ideas[24] = "My powerful wings allow me to soar high in the sky.";
	_ideas[25] = "I have a strong sense of community within my flock.";
	_ideas[26] = "My beak is specialized for cracking open nuts and seeds.";
	_ideas[27] = "I am known for my distinctive song that varies between individuals.";
	_ideas[28] = "I build intricate nests to protect my eggs and chicks.";
	_ideas[29] = "My webbed feet make me an excellent swimmer.";
	_ideas[30] = "I communicate through complex dances and gestures.";
	_ideas[31] = "I rely on echolocation to navigate in the dark.";
	_ideas[32] = "I have a thick fur coat to keep me warm in the winter.";
	_ideas[33] = "I am capable of hibernating for months at a time.";
	_ideas[34] = "I use my sharp talons to catch and kill prey.";
	_ideas[35] = "I have a long, prehensile tail that I use for balance.";
	_ideas[36] = "I have a strong maternal instinct, fiercely protecting my young.";
	_ideas[37] = "I am known for my playful antics and curiosity.";
	_ideas[38] = "My large tusks are used for digging up roots and defending against predators.";
	_ideas[39] = "I am a master of camouflage, blending in with my surroundings.";
	_ideas[40] = "I rely on my keen sense of smell to locate food.";
	_ideas[41] = "I have specialized adaptations for climbing trees.";
	_ideas[42] = "I am capable of regenerating lost limbs.";
	_ideas[43] = "I have a long, flexible tongue for reaching nectar deep inside flowers.";
	_ideas[44] = "I communicate through a series of clicks and whistles.";
	_ideas[45] = "I have a thick, scaly hide that protects me from predators.";
	_ideas[46] = "I am known for my long, graceful neck.";
	_ideas[47] = "I use my sharp beak to crack open shells and extract the meat inside.";
	_ideas[48] = "I rely on my powerful sense of smell to track down prey.";
	_ideas[49] = "I have specialized adaptations for living in extreme temperatures.";
	_ideas[50] = "I communicate through a variety of vocalizations, from songs to grunts.";
	_ideas[51] = "I have a thick layer of blubber to insulate me from the cold.";
	_ideas[52] = "I am capable of running at high speeds for long distances.";
	_ideas[53] = "I rely on my powerful jaws to crush bones and tear flesh.";
	_ideas[54] = "I have specialized adaptations for living in dense forests.";
	_ideas[55] = "I am known for my distinctive black and white markings.";
	_ideas[56] = "I communicate through a complex system of body language and vocalizations.";
	_ideas[57] = "I am capable of diving to great depths in search of food.";
	_ideas[58] = "I have a highly developed sense of smell, which helps me navigate and find food.";
	_ideas[59] = "I am known for my intelligence and problem-solving abilities.";
	_ideas[60] = "I rely on my powerful hind legs to leap great distances.";
	_ideas[61] = "I have specialized adaptations for living in arid deserts.";
	_ideas[62] = "I communicate through a series of barks, yips, and howls.";
	_ideas[63] = "I am capable of changing color to blend in with my environment.";
	_ideas[64] = "I have a thick, muscular tail that I use for balance and communication.";
	_ideas[65] = "I rely on my acute sense of hearing to detect prey.";
	_ideas[66] = "I am known for my powerful, crushing bite.";
	_ideas[67] = "I communicate through a variety of vocalizations, including chirps and trills.";
	_ideas[68] = "I have specialized adaptations for living in cold, icy waters.";
	_ideas[69] = "I rely on my keen sense of smell to locate mates and detect danger.";
	_ideas[70] = "I am known for my ability to jump great heights and distances.";
	_ideas[71] = "I communicate through a series of grunts, growls, and roars.";
	_ideas[72] = "I have specialized adaptations for living in hot, arid climates.";
	_ideas[73] = "I am capable of climbing steep cliffs with ease.";
	_ideas[74] = "I rely on my keen eyesight to spot prey from a distance.";
	_ideas[75] = "I am known for my distinctive, colorful plumage.";
	_ideas[76] = "I communicate through a series of whistles and clicks.";
	_ideas[77] = "I have specialized adaptations for living in dense jungles.";
	_ideas[78] = "I rely on my powerful sense of smell to track down prey.";
	_ideas[79] = "I am known for my ability to run at high speeds for long distances.";
	_ideas[80] = "I communicate through a variety of vocalizations, including songs and calls.";
	_ideas[81] = "I have specialized adaptations for living in harsh, desert environments.";
	_ideas[82] = "I rely on my powerful wings to soar effortlessly through the sky.";
	_ideas[83] = "I am known for my distinctive, loud call that can be heard for miles.";
	_ideas[84] = "I have specialized adaptations for living in icy, polar regions.";
	_ideas[85] = "I communicate through a series of grunts, squeals, and clicks.";
	_ideas[86] = "I rely on my strong sense of smell to locate mates and detect danger.";
	_ideas[87] = "I am known for my ability to camouflage myself in my surroundings.";
	_ideas[88] = "I have specialized adaptations for living in dense, tropical rainforests.";
	_ideas[89] = "I communicate through a series of complex vocalizations and body movements.";
	_ideas[90] = "I rely on my powerful sense of smell to track down prey.";
	_ideas[91] = "I am known for my ability to mimic the calls of other animals.";
	_ideas[92] = "I have specialized adaptations for living in cold, snowy climates.";
	_ideas[93] = "I rely on my sharp claws and powerful jaws to catch and kill prey.";
	_ideas[94] = "I am known for my distinctive, striped coat pattern.";
	_ideas[95] = "I communicate through a series of chirps, whistles, and trills.";
	_ideas[96] = "I have specialized adaptations for living in fast-flowing rivers.";
	_ideas[97] = "I rely on my keen sense of smell to locate mates and detect danger.";
	_ideas[98] = "I am known for my ability to navigate long distances using the stars.";
	_ideas[99] = "I have specialized adaptations for living in dense, underwater kelp forests.";
}
