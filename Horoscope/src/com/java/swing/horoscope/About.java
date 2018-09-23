package com.java.swing.horoscope;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JSplitPane;
import java.awt.GridLayout;
import java.awt.BorderLayout;
import java.awt.FlowLayout;
import javax.swing.BoxLayout;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextField;

public class About {

	private JFrame frmAbout;

	public JFrame getFrmAbout() {
		return frmAbout;
	}

	public void setFrmAbout(JFrame frmAbout) {
		this.frmAbout = frmAbout;
	}

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					About window = new About();
					window.frmAbout.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public About() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frmAbout = new JFrame();
		frmAbout.setTitle("About");
		frmAbout.setBounds(100, 100, 450, 300);
		frmAbout.setLocationRelativeTo(null);//窗体居中显示
		frmAbout.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		frmAbout.getContentPane().setLayout(new GridLayout(1, 0, 0, 0));
		
		JSplitPane splitPane = new JSplitPane();
		splitPane.setOrientation(JSplitPane.VERTICAL_SPLIT);
		splitPane.setEnabled(false);
		splitPane.setDividerLocation(210);
		frmAbout.getContentPane().add(splitPane);

		JPanel panel = new JPanel();
		splitPane.setLeftComponent(panel);
		panel.setLayout(null);
		
		JPanel panel_1 = new JPanel();
		splitPane.setRightComponent(panel_1);
		panel_1.setLayout(null);
		
		
	}
}
