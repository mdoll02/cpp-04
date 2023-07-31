/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:39:35 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/25 14:40:37 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Default Brain constructor called" << std::endl;
	_ideas[0] = "Build a nest";
	_ideas[1] = "Hunt for food";
	_ideas[2] = "Migrate to a warmer climate";
	_ideas[3] = "Establish dominance in the pack";
	_ideas[4] = "Form a social bond";
	_ideas[5] = "Hide from predators";
	_ideas[6] = "Mark territory";
	_ideas[7] = "Find a mate";
	_ideas[8] = "Search for water";
	_ideas[9] = "Play with other members";
	_ideas[10] = "Take a nap";
	_ideas[11] = "Groom themselves or others";
	_ideas[12] = "Explore their environment";
	_ideas[13] = "Use tools to extract food";
	_ideas[14] = "Communicate with gestures or sounds";
	_ideas[15] = "Protect their offspring";
	_ideas[16] = "Look for a suitable burrow or den";
	_ideas[17] = "Collect materials for shelter";
	_ideas[18] = "Learn a new skill";
	_ideas[19] = "Adapt to changes in the surroundings";
	_ideas[20] = "Collaborate in a group hunt";
	_ideas[21] = "Form a defensive formation";
	_ideas[22] = "Use camouflage to avoid predators";
	_ideas[23] = "Mimic the appearance of a dangerous animal";
	_ideas[24] = "Forage for fruits or nuts";
	_ideas[25] = "Create a diversion to confuse enemies";
	_ideas[26] = "Bask in the sun to regulate body temperature";
	_ideas[27] = "Investigate a new and unfamiliar object";
	_ideas[28] = "Engage in a mating display";
	_ideas[29] = "Burrow into the ground for safety";
	_ideas[30] = "Take turns caring for young ones";
	_ideas[31] = "Synchronize movements with the group";
	_ideas[32] = "Use echolocation to find prey";
	_ideas[33] = "Hibernate during the winter months";
	_ideas[34] = "Follow a specific migration route";
	_ideas[35] = "Form a coalition to increase hunting success";
	_ideas[36] = "Search for a source of fresh water";
	_ideas[37] = "Participate in a courtship dance";
	_ideas[38] = "Retrieve hidden food reserves";
	_ideas[39] = "Imitate the sounds of other animals";
	_ideas[40] = "Practice flying or swimming skills";
	_ideas[41] = "Create a distraction to escape from a predator";
	_ideas[42] = "Sharpen claws or teeth";
	_ideas[43] = "Gather leaves or grass for a nest";
	_ideas[44] = "Engage in mutual grooming";
	_ideas[45] = "Perform a territorial display";
	_ideas[46] = "Initiate a game with another animal";
	_ideas[47] = "Follow the leader of the group";
	_ideas[48] = "Release a warning signal to alert others of danger";
	_ideas[49] = "Adopt a different feeding strategy";
	_ideas[50] = "Call out to attract a mate or group members";
	_ideas[51] = "Bury or cache excess food for later consumption";
	_ideas[52] = "Form an alliance with another group";
	_ideas[53] = "Create a diversion to protect young ones";
	_ideas[54] = "Climb to higher ground for a better vantage point";
	_ideas[55] = "Use vocalizations to coordinate movement";
	_ideas[56] = "Dig a burrow or tunnel for shelter";
	_ideas[57] = "Adjust sleep patterns to match environmental changes";
	_ideas[58] = "Engage in play-fighting to practice skills";
	_ideas[59] = "Mark trails with scent for navigation";
	_ideas[60] = "Form a grooming chain within a group";
	_ideas[61] = "Rotate grazing areas to allow vegetation to regrow";
	_ideas[62] = "Show submission to establish harmony in the group";
	_ideas[63] = "Collect and store objects for future use";
	_ideas[64] = "Learn and imitate the behaviors of other species";
	_ideas[65] = "Initiate a mating dance or ritual";
	_ideas[66] = "Create a shelter using leaves or branches";
	_ideas[67] = "Conserve energy by resting in a shady area";
	_ideas[68] = "Communicate through scent markings";
	_ideas[69] = "Play a game of chase or tag";
	_ideas[70] = "Reinforce social bonds through grooming";
	_ideas[71] = "Swarm together for protection against predators";
	_ideas[72] = "Scavenge for food scraps left by other animals";
	_ideas[73] = "Form a defensive circle around vulnerable individuals";
	_ideas[74] = "Collect materials for a mating display area";
	_ideas[75] = "Create a visual signal to communicate with distant members";
	_ideas[76] = "Roll in mud or water to cool down in hot weather";
	_ideas[77] = "Use body language to convey intentions";
	_ideas[78] = "Adjust daily routines based on the phases of the moon";
	_ideas[79] = "Initiate a group howl, roar, or song";
	_ideas[80] = "Form a line to move through tall grass or vegetation";
	_ideas[81] = "Collect and store water in natural containers";
	_ideas[82] = "Construct a barrier to protect against predators";
	_ideas[83] = "Practice agility and balance by climbing trees";
	_ideas[84] = "Create a distraction to lead predators away from young ones";
	_ideas[85] = "Form a chain to help weaker members cross difficult terrain";
	_ideas[86] = "Borrow tactics from other species for hunting";
	_ideas[87] = "Use tail movements to communicate emotions";
	_ideas[88] = "Roll into a ball or play dead to avoid danger";
	_ideas[89] = "Form a stampede to confuse predators";
	_ideas[90] = "Blend into the surroundings using natural colors";
	_ideas[91] = "Take turns keeping watch for potential threats";
	_ideas[92] = "Reenact confrontations to establish dominance";
	_ideas[93] = "Form a synchronized swimming or flying pattern";
	_ideas[94] = "Playfully interact with other species";
	_ideas[95] = "Use environmental elements for artistic displays";
	_ideas[96] = "Create a decoy nest to mislead predators";
	_ideas[97] = "Initiate a group grooming session";
	_ideas[98] = "Share food with other members in an act of kindness";
	_ideas[99] = "Gather in a circle for communal rest or sleep";
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain copy assignment constructor called" << std::endl;
	if (this != &other) {
		int i = 0;
		while (i < 100) {
			this->_ideas[i] = other._ideas[i];
			i++;
		}
	}
	return *this;
}

std::string Brain::getIdea(int i) const { return _ideas[i]; }

void Brain::setIdea(int i, std::string const &new_idea) {
	if (i < 0 || i > 99) {
		std::cout << "Index out of range!" << std::endl;
		return;
	}
	_ideas[i] = new_idea;
}
