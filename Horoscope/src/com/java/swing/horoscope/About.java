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
import java.awt.Color;
import javax.swing.SwingConstants;
import javax.swing.SwingUtilities;

import java.awt.Font;
import java.awt.SystemColor;
import javax.swing.DropMode;
import javax.swing.JTextPane;
import javax.swing.JComboBox;
import javax.swing.JEditorPane;
import javax.swing.UIManager;

import com.alee.laf.WebLookAndFeel;

import javax.swing.JSlider;
import javax.swing.JFormattedTextField;
import javax.swing.JLabel;
import javax.swing.ImageIcon;

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
		frmAbout.setForeground(new Color(205, 133, 63));
		frmAbout.setTitle("About");
		frmAbout.setBounds(100, 100, 450, 300);
		frmAbout.setLocationRelativeTo(null);// 窗体居中显示
		frmAbout.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		frmAbout.setResizable(false);
		frmAbout.getContentPane().setLayout(new GridLayout(1, 0, 0, 0));

		JSplitPane splitPane = new JSplitPane();
		splitPane.setForeground(new Color(255, 218, 185));
		splitPane.setBackground(new Color(255, 218, 185));
		splitPane.setOrientation(JSplitPane.VERTICAL_SPLIT);
		splitPane.setEnabled(false);
		splitPane.setDividerLocation(210);
		frmAbout.getContentPane().add(splitPane);

		JPanel panel = new JPanel();
		panel.setBackground(new Color(255, 248, 220));
		splitPane.setLeftComponent(panel);
		panel.setLayout(null);

		JTextPane Author = new JTextPane();
		Author.setEditable(false);
		Author.setBackground(new Color(255, 248, 220));
		Author.setFont(new Font("华文隶书", Font.BOLD, 22));
		Author.setText(
				"Producer:     \r\n\u5218\u96E8\u8F69   \u53F6\u5A01\u5F3A     \u9648\u4EF0\u7126   \u8D56\u667A\u592B     \u9EC4\u5C11\u8FBE   \u9A6C\u5B88\u4FCA");
		Author.setBounds(133, 56, 215, 106);
		panel.add(Author);

		JTextPane Title = new JTextPane();
		Title.setEditable(false);
		Title.setForeground(new Color(0, 51, 51));
		Title.setBackground(new Color(255, 248, 220));
		Title.setFont(new Font("Kristen ITC", Font.BOLD, 18));
		Title.setText("From the 44th Inc. \r\n");
		Title.setBounds(133, 22, 230, 56);
		panel.add(Title);

		JTextPane Version = new JTextPane();
		Version.setForeground(new Color(85, 107, 47));
		Version.setFont(new Font("Comic Sans MS", Font.BOLD, 16));
		Version.setBackground(new Color(255, 248, 220));
		Version.setText("Version: 1.24");
		Version.setBounds(156, 163, 114, 52);
		panel.add(Version);

		JLabel lblNewLabel_1 = new JLabel();
		lblNewLabel_1.setVerticalAlignment(SwingConstants.TOP);
		lblNewLabel_1.setIcon(new ImageIcon("D:\\Java\\Eclipse\\Horoscopes\\src\\com\\java\\swing\\horoscope\\01.png"));
		lblNewLabel_1.setBounds(70, 26, 29, 24);
		panel.add(lblNewLabel_1);

		JPanel panel_1 = new JPanel();
		panel_1.setBackground(new Color(255, 248, 220));
		splitPane.setRightComponent(panel_1);
		panel_1.setLayout(null);

		JLabel lblNewLabel_2 = new JLabel();
		lblNewLabel_2.setIcon(new ImageIcon("D:\\Java\\Eclipse\\Horoscopes\\src\\com\\java\\swing\\horoscope\\02.png"));
		lblNewLabel_2.setBounds(105, 14, 16, 16);
		panel_1.add(lblNewLabel_2);

		JLabel Copyright = new JLabel("Copyright       2018 44th Incorporated. All rights reserved.");
		Copyright.setBounds(35, 10, 388, 20);
		panel_1.add(Copyright);
		Copyright.setFont(new Font("华文细黑", Font.BOLD, 12));

	}
}
