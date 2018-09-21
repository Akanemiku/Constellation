package com.java.swing.horoscope;

import java.awt.EventQueue;

import javax.swing.JFrame;

public class Resultlayer {

	private JFrame frmResult;
	public JFrame getFrmResult() {
		return frmResult;
	}
	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Resultlayer window = new Resultlayer();
					window.frmResult.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public Resultlayer() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frmResult = new JFrame();
		frmResult.setTitle("Result");
		frmResult.setBounds(100, 100, 450, 300);
		frmResult.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

}
