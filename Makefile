.PHONY: clean All

All:
	@echo "----------Building project:[ Codes - Debug ]----------"
	@cd "test" && $(MAKE) -f  "Codes.mk"
clean:
	@echo "----------Cleaning project:[ Codes - Debug ]----------"
	@cd "test" && $(MAKE) -f  "Codes.mk" clean
