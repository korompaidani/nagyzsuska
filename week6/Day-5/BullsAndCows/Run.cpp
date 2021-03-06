#include "Run.h"

Run::Run() {
  srand(time(NULL));
  m_digit_generator = new DigitsGenerator();
  m_bulls = new BullCount(m_digit_generator->get_digits());
  m_cows = new CowCount(m_digit_generator->get_digits());
}

void Run::run() {
  std::cout << m_digit_generator->get_digits();
  for (int i = 1; i <= 10; i++) {
    std::cout << "Please give a 4 digits number: " << std::endl;
    m_input = Try::try_catch_block();
    m_bulls->count(m_input);
    m_cows->count(m_input);
    std::cout << "Bulls: " << m_bulls->get_count() << ", Cows: " << m_cows->get_count() << std::endl;
    if (m_bulls->get_count() == DIGIT_SIZE) {
      std::cout << "Congratulations: You win!" << std::endl;
      break;
    }
    if (i == 10) {
      std::cout << "Game over. The number was: " << m_digit_generator->get_digits() << std::endl;
    }
  }
}

Run::~Run() {
  delete m_digit_generator;
  delete m_bulls;
  delete m_cows;
}