# Makefile for generating the current date

# Set the path to the Generator folder
GENERATOR_DIR := Generator

# The name of the script file
SCRIPT := GenerateExercise.sh

# Make the script executable
GenerateExercise: $(GENERATOR_DIR)/$(SCRIPT)
	chmod +x $(GENERATOR_DIR)/$(SCRIPT)

# Run the script
run:
	$(GENERATOR_DIR)/$(SCRIPT)
