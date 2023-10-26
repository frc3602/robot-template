SRC := src/jankybot_python

run:
	py -3 $(SRC)/robot.py run

deploy:
	py -3 $(SRC)/robot.py deploy --nc

clean:
	del "networktables.json"
	rmdir /s /q "$(SRC)/__pycache__"
	rmdir /s /q "$(SRC)/subsystems/__pycache__"