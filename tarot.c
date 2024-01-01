#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structure representing a Tarot card
typedef struct {
    const char* name;
    const char* suit;
} TarotCard;

// Array containing the Major Arcana cards
const TarotCard majorArcana[] = {
    {"The Fool", "Major Arcana"},
    {"The Magician", "Major Arcana"},
    {"The High Priestess", "Major Arcana"},
    {"The Empress", "Major Arcana"},
    {"The Emperor", "Major Arcana"},
    {"The Hierophant", "Major Arcana"},
    {"The Lovers", "Major Arcana"},
    {"The Chariot", "Major Arcana"},
    {"Strength", "Major Arcana"},
    {"The Hermit", "Major Arcana"},
    {"Wheel of Fortune", "Major Arcana"},
    {"Justice", "Major Arcana"},
    {"The Hanged Man", "Major Arcana"},
    {"Death", "Major Arcana"},
    {"Temperance", "Major Arcana"},
    {"The Devil", "Major Arcana"},
    {"The Tower", "Major Arcana"},
    {"The Star", "Major Arcana"},
    {"The Moon", "Major Arcana"},
    {"The Sun", "Major Arcana"},
    {"Judgment", "Major Arcana"},
    {"The World", "Major Arcana"}
};

// Array containing the Minor Arcana cards
const TarotCard minorArcana[] = {
    {"Ace of Cups", "Cups"},
    {"Two of Cups", "Cups"},
    {"Three of Cups", "Cups"},
    {"Four of Cups", "Cups"},
    {"Five of Cups", "Cups"},
    {"Six of Cups", "Cups"},
    {"Seven of Cups", "Cups"},
    {"Eight of Cups", "Cups"},
    {"Nine of Cups", "Cups"},
    {"Ten of Cups", "Cups"},
    {"Page of Cups", "Cups"},
    {"Knight of Cups", "Cups"},
    {"Queen of Cups", "Cups"},
    {"King of Cups", "Cups"},
    {"Ace of Swords", "Swords"},
    {"Two of Swords", "Swords"},
    {"Three of Swords", "Swords"},
    {"Four of Swords", "Swords"},
    {"Five of Swords", "Swords"},
    {"Six of Swords", "Swords"},
    {"Seven of Swords", "Swords"},
    {"Eight of Swords", "Swords"},
    {"Nine of Swords", "Swords"},
    {"Ten of Swords", "Swords"},
    {"Page of Swords", "Swords"},
    {"Knight of Swords", "Swords"},
    {"Queen of Swords", "Swords"},
    {"King of Swords", "Swords"},
    {"Ace of Wands", "Wands"},
    {"Two of Wands", "Wands"},
    {"Three of Wands", "Wands"},
    {"Four of Wands", "Wands"},
    {"Five of Wands", "Wands"},
    {"Six of Wands", "Wands"},
    {"Seven of Wands", "Wands"},
    {"Eight of Wands", "Wands"},
    {"Nine of Wands", "Wands"},
    {"Ten of Wands", "Wands"},
    {"Page of Wands", "Wands"},
    {"Knight of Wands", "Wands"},
    {"Queen of Wands", "Wands"},
    {"King of Wands", "Wands"},
    {"Ace of Pentacles", "Pentacles"},
    {"Two of Pentacles", "Pentacles"},
    {"Three of Pentacles", "Pentacles"},
    {"Four of Pentacles", "Pentacles"},
    {"Five of Pentacles", "Pentacles"},
    {"Six of Pentacles", "Pentacles"},
    {"Seven of Pentacles", "Pentacles"},
    {"Eight of Pentacles", "Pentacles"},
    {"Nine of Pentacles", "Pentacles"},
    {"Ten of Pentacles", "Pentacles"},
    {"Page of Pentacles", "Pentacles"},
    {"Knight of Pentacles", "Pentacles"},
    {"Queen of Pentacles", "Pentacles"},
    {"King of Pentacles", "Pentacles"}
};

// Function to perform a Tarot reading
void performTarotReading()
{
    // Seed the random number generator
    srand(time(NULL));

    // Perform a past reading
    int pastCardIndex = rand() % (sizeof(majorArcana) / sizeof(majorArcana[0]));
    const TarotCard pastCard = majorArcana[pastCardIndex];

    // Perform a present reading
    int presentCardIndex = rand() % (sizeof(minorArcana) / sizeof(minorArcana[0]));
    const TarotCard presentCard = minorArcana[presentCardIndex];

    // Perform a future reading
    int futureCardIndex = rand() % (sizeof(majorArcana) / sizeof(majorArcana[0]));
    const TarotCard futureCard = majorArcana[futureCardIndex];

    // Print the reading
    printf("Past: %s (%s)\n", pastCard.name, pastCard.suit);
    printf("Present: %s (%s)\n", presentCard.name, presentCard.suit);
    printf("Future: %s (%s)\n", futureCard.name, futureCard.suit);
}

int main(void)
{
    printf("Performing Tarot Reading...\n");
    performTarotReading();

    return 0;
}
