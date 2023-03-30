class Computer {
public:
	void Compute() {}
	void PlayGame() {}
	void SurfOnWeb() {}
	
};

class NetBook : public Computer {
private:
	using Computer::Compute;
	using Computer::PlayGame;
};

int main() {
	NetBook nb;
	//? nb.Compute();
	//? nb.PlayGame();
	nb.SurfOnWeb();
	
	return 0;
}