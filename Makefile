ARDUINO = arduino
UPLOADFLAGS = --upload
VERIFYFLAGS = --verify

%.:
	$(ARDUINO) $(UPLOADFLAGS) $*/$*.ino

.PHONY: %
