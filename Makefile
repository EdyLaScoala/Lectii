# Makefile for generating the current date and exercise folder

# Set the path to the Generator folder
GENERATOR_DIR := Matrices/Exercises

HW_GENERATOR_DIR := Matrices/Homework

# The name of the script file
SCRIPT := GenerateExercise.sh

date_script: $(GENERATOR_DIR)/$(SCRIPT)
	chmod +x $(GENERATOR_DIR)/$(SCRIPT)
	@read -p "Enter the exercise number: " EXERCISE_NUMBER; \
	$(GENERATOR_DIR)/$(SCRIPT) $$EXERCISE_NUMBER

ex:
	@read -p "Enter the exercise number: " EXERCISE_NUMBER; \
	$(GENERATOR_DIR)/$(SCRIPT) "$$EXERCISE_NUMBER"

hw:
	@read -p "Enter the exercise number: " EXERCISE_NUMBER; \
	$(GENERATOR_DIR)/$(SCRIPT) "$$EXERCISE_NUMBER"
