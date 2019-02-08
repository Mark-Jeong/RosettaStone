// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <hspp/Models/Spell.hpp>

namespace Hearthstonepp
{
Spell::Spell(Game* gameAgent, Card& card) : Entity(gameAgent, card)
{
    // Do nothing
}

void Spell::Destroy()
{
    // Do nothing
}
}  // namespace Hearthstonepp