# Makefile for generating the current date and exercise folder

# Set the path to the Generator folder
GENERATOR_DIR := Generator

EX_GENERATOR_DIR := Matrices/Homework

HW_GENERATOR_DIR := Matrices/Homework

# The name of the script file
EX_SCRIPT := GenerateExercise.sh

HW_SCRIPT := GenerateHomework.sh

date_script: $(GENERATOR_DIR)/$(SCRIPT)
	chmod +x $(GENERATOR_DIR)/$(SCRIPT)
	@read -p "Enter the exercise number: " EXERCISE_NUMBER; \
	$(GENERATOR_DIR)/$(SCRIPT) $$EXERCISE_NUMBER

ex:
	@read -p "Enter the exercise number: " EXERCISE_NUMBER; \
	$(GENERATOR_DIR)/$(EX_SCRIPT) "$$EXERCISE_NUMBER" "$$EX_GENERATOR_DIR"

hw:
	@read -p "Enter the exercise number: " EXERCISE_NUMBER; \
	$(GENERATOR_DIR)/$(HW_SCRIPT) "$$EXERCISE_NUMBER" "$$HW_GENERATOR_DIR"
