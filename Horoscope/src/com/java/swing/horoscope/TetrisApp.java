package com.java.swing.horoscope;

import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;

public class TetrisApp extends JFrame {

	private static final long serialVersionUID = 8995729671326316569L;
	Tetris tetris = new Tetris();

	public TetrisApp() {
		this.setLocationRelativeTo(null);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setSize(280, 350);
		this.setTitle("Tetris Remake");
		this.setResizable(false);

		JMenuBar menu = new JMenuBar();
		this.setJMenuBar(menu);
		JMenu gameMenu = new JMenu("Game");
		gameMenu.setFont(new Font("Segoe Script", Font.BOLD, 14));
		JMenuItem newGameItem = gameMenu.add("New");
		newGameItem.addActionListener(this.NewGameAction);
		newGameItem.setFont(new Font("Segoe Script", Font.BOLD, 14));
		JMenuItem pauseItem = gameMenu.add("Pause");
		pauseItem.addActionListener(this.PauseAction);
		pauseItem.setFont(new Font("Segoe Script", Font.BOLD, 14));
		JMenuItem continueItem = gameMenu.add("Continue");
		continueItem.addActionListener(this.ContinueAction);
		continueItem.setFont(new Font("Segoe Script", Font.BOLD, 14));
		JMenuItem exitItem = gameMenu.add("Exit");
		exitItem.addActionListener(this.ExitAction);
		exitItem.setFont(new Font("Segoe Script", Font.BOLD, 14));
		JMenu modeMenu = new JMenu("Mode");
		JMenuItem v4Item = modeMenu.add("4-Block");
		modeMenu.setFont(new Font("Segoe Script", Font.BOLD, 14));
		v4Item.setFont(new Font("Segoe Script", Font.BOLD, 14));
		v4Item.addActionListener(this.v4Action);
		JMenuItem v6Item = modeMenu.add("6-Block");
		v6Item.addActionListener(this.v6Action);
		v6Item.setFont(new Font("Segoe Script", Font.BOLD, 14));
		JMenu helpMenu = new JMenu("Help");
		helpMenu.setFont(new Font("Segoe Script", Font.BOLD, 14));
		JMenuItem aboutItem = helpMenu.add("About");
		aboutItem.setFont(new Font("Segoe Script", Font.BOLD, 14));
		aboutItem.addActionListener(this.AboutAction);
		menu.add(gameMenu);
		menu.add(modeMenu);
		menu.add(helpMenu);

		this.add(this.tetris);
		this.tetris.setFocusable(true);
	}

	static public void main(String... args) {
		TetrisApp tetrisApp = new TetrisApp();
		tetrisApp.setVisible(true);
		tetrisApp.setLocationRelativeTo(null);//窗体居中显示
		tetrisApp.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
	}

	ActionListener NewGameAction = new ActionListener() {

		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO 自动生成的方法存根
			TetrisApp.this.tetris.Initial();
		}
	};

	ActionListener PauseAction = new ActionListener() {

		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO 自动生成的方法存根
			TetrisApp.this.tetris.SetPause(true);
		}
	};

	ActionListener ContinueAction = new ActionListener() {

		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO 自动生成的方法存根
			TetrisApp.this.tetris.SetPause(false);
		}
	};

	ActionListener ExitAction = new ActionListener() {

		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO 自动生成的方法存根
			System.exit(0);
		}
	};

	ActionListener AboutAction = new ActionListener() {

		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO 自动生成的方法存根
			JOptionPane.showMessageDialog(TetrisApp.this, "Tetris Remake Ver-1.24", "About", JOptionPane.WARNING_MESSAGE);
		}
	};

	ActionListener v4Action = new ActionListener() {

		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO 自动生成的方法存根
			TetrisApp.this.tetris.SetMode("v4");
		}
	};

	ActionListener v6Action = new ActionListener() {

		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO 自动生成的方法存根
			TetrisApp.this.tetris.SetMode("v6");
		}
	};
}
