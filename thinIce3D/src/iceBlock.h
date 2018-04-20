namespace thinice {

    // Internal Block
    class Block {
        // Defines the physical state of the block
        enum State {
            DISABLED, // Areas of the screen that cannot be seen be reached by the player, hence, disabled.
            WALL, // Boundary that restricts sprite's movements.
            THICK_ICE, // Becomes THIN_ICE if stepped on.
            THIN_ICE, // Becomes LIQUID if stepped on.
            LIQUID // Ice is completely melted. 
        };
    public:
        Block() {}; // Default Constructor
        Block(const int s) {}; // Constructor that sets state of block
        ~Block(); // Destructor

        State get_state() const; // Returns state of block
        void melt(); // Melts block, decreases State value by 1
    };
}